/*
 Image: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
 */

#import <Foundation/NSObject.h>

@class NSString, NSValue;

@interface PLCoalitionDataObject : NSObject

{
    NSString *_bundleID;
    NSString *_launchdName;
    NSValue *_coalStruct;
    unsigned long long _coalitionID;
}

@property (retain) NSString *bundleID;
@property (retain) NSString *launchdName;
@property (retain) NSValue *coalStruct;
@property unsigned long long coalitionID;

- (void)dealloc;
- (id)description;

@end
