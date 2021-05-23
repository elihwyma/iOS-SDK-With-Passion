/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@protocol CRKConfigurationSource;

@interface CRKSynchronousConfigurationSource : NSObject

{
    id <CRKConfigurationSource> mBaseSource;
}

- (id)initWithConfigurationSource:(id)arg1;
- (id)configurationWithError:(id *)arg1;
- (_Bool)setConfiguration:(id)arg1 error:(id *)arg2;

@end
