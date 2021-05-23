/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKActionMenuItem.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface CKRecordActionMenuItem : CKActionMenuItem

{
    _Bool _wasSelected;
    NSDate *_dateSelected;
}

@property (nonatomic) _Bool wasSelected;
@property (retain, nonatomic) NSDate *dateSelected;

- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateForState:(long long)arg1 touchInside:(_Bool)arg2;

@end
