/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CRKMarker;

@interface CRKSettingsUIVisibilityIndicatorFile : NSObject

{
    id <CRKMarker> mFileMarker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool exists;

+ (id)fileURL;

- (id)init;
- (_Bool)deleteWithError:(id *)arg1;
- (_Bool)createWithError:(id *)arg1;

@end
