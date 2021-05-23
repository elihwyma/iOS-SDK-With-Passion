/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

#import <NewsUI/Swift-Protocol.h>

@class NSString, NTPBDiscoverMoreVideosInfo;

@interface NUDiscoverMoreVideosInfo : NSObject <Swift>

{
    NTPBDiscoverMoreVideosInfo *_discoverMoreVideosInfo;
}

@property (copy, nonatomic, readonly) NTPBDiscoverMoreVideosInfo *discoverMoreVideosInfo;
@property (copy, nonatomic, readonly) NSString *actionURLString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDiscoverMoreVideosInfo:(id)arg1;

@end
