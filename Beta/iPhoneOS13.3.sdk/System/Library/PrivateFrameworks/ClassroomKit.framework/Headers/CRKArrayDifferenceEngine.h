/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CRKArrayDifferenceConfiguration;

@interface CRKArrayDifferenceEngine : NSObject

{
    NSObject *mObject;
    NSString *mKeyPath;
    id <CRKArrayDifferenceConfiguration> _configuration;
}

@property (retain, nonatomic) id <CRKArrayDifferenceConfiguration> configuration;

+ (id)identityConfiguration;
+ (id)configurationWithIncomingItemsIdentifierFunction:(CDUnknownBlockType)arg1 publishedItemsIdentifierFunction:(CDUnknownBlockType)arg2;

- (id)initWithObject:(id)arg1 keyPath:(id)arg2 configuration:(id)arg3;
- (void)updateWithNewArray:(id)arg1;

@end
