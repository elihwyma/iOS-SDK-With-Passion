/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface _CDPSerializedDataHarvester : NSObject

{
    NSURL *_url;
}

@property (retain, nonatomic) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadWithLimit:(unsigned long long)arg1 dataPointReader:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;

@end
