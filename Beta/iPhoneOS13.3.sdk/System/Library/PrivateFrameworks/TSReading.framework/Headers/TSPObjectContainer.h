/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSPObject.h>

@class NSArray;

@interface TSPObjectContainer : TSPObject

{
    unsigned char _packageIdentifier;
    NSArray *_childObjects;
}

+ (long long)objectIdentifierForPackageIdentifier:(unsigned char)arg1;

- (id)initWithContext:(id)arg1;
- (id)packageLocator;
- (_Bool)shouldDelayArchiving;
- (unsigned int)delayedArchivingPriority;
- (long long)tsp_identifier;
- (id)initWithContext:(id)arg1 packageIdentifier:(unsigned char)arg2;
- (void)prepareForComponentWriteWithDelayedObjects:(id)arg1;

@end
