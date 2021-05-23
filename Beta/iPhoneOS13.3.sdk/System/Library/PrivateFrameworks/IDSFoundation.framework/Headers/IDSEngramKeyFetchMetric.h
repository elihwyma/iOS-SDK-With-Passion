/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSError, NSString;

@interface IDSEngramKeyFetchMetric : NSObject

{
    NSError *_keyFetchError;
}

@property (nonatomic, readonly) NSString *name;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSError *keyFetchError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithKeyFetchError:(id)arg1;

@end
