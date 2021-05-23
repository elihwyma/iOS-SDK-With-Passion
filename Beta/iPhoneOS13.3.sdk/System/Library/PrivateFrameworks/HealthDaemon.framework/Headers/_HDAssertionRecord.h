/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString;

@interface _HDAssertionRecord : NSObject

{
    NSString *_assertionIdentifier;
    NSHashTable *_assertions;
}

@property (copy, nonatomic, readonly) NSString *assertionIdentifier;
@property (nonatomic, readonly) NSHashTable *assertions;

- (id)initWithAssertionIdentifier:(id)arg1;

@end
