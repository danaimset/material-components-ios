// Copyright 2018-present the Material Components for iOS authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import "MaterialActionSheet.h"

#import <XCTest/XCTest.h>

@class MDCActionSheetHeaderView;
@class MDCActionSheetItemTableViewCell;

@interface MDCActionSheetController (Testing)
@property(nonatomic, strong) UITableView *tableView;
@property(nonatomic, strong) MDCActionSheetHeaderView *header;
- (CGFloat)openingSheetHeight;
@end

@interface MDCActionSheetTestHelper : NSObject

+ (NSArray *)colorsToTest;

+ (void)addNumberOfActions:(NSUInteger)actionsCount
             toActionSheet:(MDCActionSheetController *)actionSheet;

+ (NSArray<MDCActionSheetItemTableViewCell *> *)getCellsFromActionSheet:
    (MDCActionSheetController *)actionSheet;

@end
