/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class FCFeedRefreshSession, NSString;

@interface FCFeedViewportGap : NSObject <Swift>

{
    NSString *_identifier;
    FCFeedRefreshSession *_refreshSession;
}

@property (nonatomic, readonly) FCFeedRefreshSession *refreshSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long feedElementType;
@property (copy, nonatomic, readonly) NSString *identifier;

+ (id)pbGapFromGap:(id)arg1 refreshSession:(id)arg2 sharedStringIndex:(id)arg3;
+ (id)gapFromPBGap:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithRefreshSession:(id)arg1;
- (_Bool)isGap;
- (id)initWithRefreshSession:(id)arg1;

@end
