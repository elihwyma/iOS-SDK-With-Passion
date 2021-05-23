/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <NewsUI/Swift-Protocol.h>

@protocol SVVideoAdProviding <Swift>

@property (nonatomic, readonly) unsigned long long skipThreshold;
@property (nonatomic, readonly) _Bool hasAction;

- (unsigned short)presentPrivacyStatement;
- (unsigned short)skipped;
- (unsigned short)presentAction;

@end
