/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFSelectableAlertButton.h>

@class NSObject, NSString, WFContentItem;

@protocol OS_dispatch_group;

@interface WFContentAlertButton : WFSelectableAlertButton

{
    _Bool _hasContentSubtitle;
    _Bool _hideSubtitle;
    NSString *_subtitle;
    WFContentItem *_contentItem;
    NSObject<OS_dispatch_group> *_group;
}

@property (retain, nonatomic) NSObject<OS_dispatch_group> *group;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic, readonly) WFContentItem *contentItem;
@property (nonatomic, readonly) _Bool hasContentSubtitle;
@property (nonatomic) _Bool hideSubtitle;

+ (id)buttonWithContentItem:(id)arg1 selected:(_Bool)arg2 stickySelection:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
+ (void)processContentAlertButtonSubtitles:(id)arg1;

- (void)start;
- (void)getSubtitle:(CDUnknownBlockType)arg1;
- (_Bool)addSubtitleCompletionHandler:(CDUnknownBlockType)arg1;

@end
