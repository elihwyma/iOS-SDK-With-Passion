/*
 Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

#import <Montreal/MontrealNNDescription.h>

@class NSNumber, NSString;

@interface MontrealNNModelQuantization : MontrealNNDescription

{
    NSString *_weightStorage;
    NSNumber *_weightStorageRange;
}

@property (readonly) NSString *weightStorage;
@property (readonly) NSNumber *weightStorageRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDictionary:(id)arg1;

@end
