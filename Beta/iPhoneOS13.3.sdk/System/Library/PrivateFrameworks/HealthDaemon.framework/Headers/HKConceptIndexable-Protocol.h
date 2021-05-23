/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/Swift-Protocol.h>

@class NSLocale, NSUUID;

@protocol HKConceptIndexable <Swift>

@property (readonly) NSUUID *UUID;
@property (copy, nonatomic, readonly) NSLocale *locale;

+ (unsigned short)indexableConceptKeyPaths;
+ (unsigned short)cachedConceptRelationshipKeyPaths;

@end
