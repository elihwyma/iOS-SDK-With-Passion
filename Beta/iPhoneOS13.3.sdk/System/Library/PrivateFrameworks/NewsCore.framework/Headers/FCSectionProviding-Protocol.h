/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/Swift-Protocol.h>

@class FCSectionSupergroupKnobs, NSString;

@protocol FCSectionProviding <Swift>

@property (copy, nonatomic, readonly) NSString *parentID;
@property (nonatomic, readonly) NSString *supergroupKnobsJson;
@property (nonatomic, readonly) FCSectionSupergroupKnobs *supergroupKnobs;

@end
