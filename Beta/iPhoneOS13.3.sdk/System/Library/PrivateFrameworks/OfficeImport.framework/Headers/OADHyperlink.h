/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface OADHyperlink : NSObject

{
    NSURL *mTargetLocation;
    int mTargetMode;
    NSString *mTargetFrame;
    NSString *mAction;
    NSString *mTooltip;
    NSString *mInvalidUrl;
    _Bool mDoEndSound;
    _Bool mIsVisited;
    _Bool mDoAddToHistory;
}

@property (nonatomic) _Bool doEndSound;
@property (nonatomic) _Bool isVisited;
@property (nonatomic) _Bool doAddToHistory;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)action;
- (void)setAction:(id)arg1;
- (id)targetFrame;
- (void)setTargetFrame:(id)arg1;
- (id)targetLocation;
- (int)targetMode;
- (id)tooltip;
- (void)setTargetLocation:(id)arg1;
- (void)setTargetMode:(int)arg1;
- (void)setTooltip:(id)arg1;
- (id)invalidUrl;
- (void)setInvalidUrl:(id)arg1;

@end
