/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@protocol SBIconListLayout;

@interface SBHCustomIconListLayoutProvider : NSObject

{
    NSDictionary *_listLayouts;
    id <SBIconListLayout> _defaultLayout;
}

@property (copy, nonatomic, readonly) NSDictionary *listLayouts;
@property (nonatomic, readonly) id <SBIconListLayout> defaultLayout;

- (id)init;
- (id)layoutForIconLocation:(id)arg1;
- (id)initWithListLayouts:(id)arg1 defaultLayout:(id)arg2;
- (id)initWithListLayouts:(id)arg1;

@end
