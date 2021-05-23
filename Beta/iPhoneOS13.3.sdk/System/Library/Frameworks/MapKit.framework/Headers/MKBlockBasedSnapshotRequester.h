/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MKBlockBasedSnapshotRequester : NSObject

{
    CDUnknownBlockType handler;
}

@property (copy, nonatomic) CDUnknownBlockType handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)snapshotRequesterWitHandler:(CDUnknownBlockType)arg1;

- (void)mapSnapshotCreator:(id)arg1 didCreateSnapshot:(id)arg2 attributionString:(id)arg3 context:(id)arg4;

@end
