/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, OCPPackage;

__attribute__((visibility("hidden")))
@interface OCXDelayedMediaContext : NSObject

{
    OCPPackage *mPackage;
    NSURL *mTargetLocation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)loadDelayedNode:(id)arg1;
- (id)initWithTargetLocation:(id)arg1 package:(id)arg2;
- (_Bool)saveDelayedMedia:(id)arg1 toFile:(id)arg2;
- (id)dataRep;

@end
