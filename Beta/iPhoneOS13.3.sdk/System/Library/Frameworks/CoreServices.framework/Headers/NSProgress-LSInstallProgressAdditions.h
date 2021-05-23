/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <Foundation/NSProgress.h>

@class NSString;

@interface NSProgress (LSInstallProgressAdditions)

@property (nonatomic) unsigned long long installState;
@property (nonatomic) unsigned long long installPhase;
@property (nonatomic, readonly) NSString *installPhaseString;

+ (id)publishingKeyForApp:(id)arg1 withPhase:(unsigned long long)arg2;
+ (id)childProgressForBundleID:(id)arg1 andPhase:(unsigned long long)arg2;
+ (id)keyPathsForValuesAffectingInstallState;
+ (id)keyPathsForValuesAffectingInstallPhase;

- (id)_LSDescription;
- (id)initWithParent:(id)arg1 bundleID:(id)arg2 andPhase:(unsigned long long)arg3;
- (void)_LSResume;

@end
