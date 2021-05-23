/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

#import <Foundation/NSObject.h>

@class UITableView;

@interface TLKTableViewScrollTester : NSObject

{
    _Bool _directionUp;
    _Bool _finishedFirstScroll;
    double _scrollTime;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _firstScroll;
    UITableView *_tableView;
    double _startTime;
}

@property (copy, nonatomic) CDUnknownBlockType completion;
@property (copy, nonatomic) CDUnknownBlockType firstScroll;
@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) _Bool directionUp;
@property (nonatomic) double startTime;
@property (nonatomic) _Bool finishedFirstScroll;
@property (nonatomic) double scrollTime;

- (id)init;
- (void)fire:(id)arg1;
- (void)performScrollTestOnTableView:(id)arg1 firstScroll:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performScrollTestOnTableView:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
