/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface WFAssociationContext : NSObject

{
    _Bool _secondaryScanCompleted;
    unsigned long long _state;
    unsigned long long _originator;
    NSString *_sectionNameJoined;
    NSDictionary *_sectionCounts;
}

@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long originator;
@property (nonatomic, readonly) NSString *stateDescription;
@property (nonatomic, readonly) NSString *originatorDescription;
@property (nonatomic) _Bool secondaryScanCompleted;
@property (copy, nonatomic) NSString *sectionNameJoined;
@property (copy, nonatomic) NSDictionary *sectionCounts;

- (id)init;
- (id)description;

@end
