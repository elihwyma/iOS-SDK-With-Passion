/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface _CDDataCollectionAnonymizer : NSObject

{
    NSData *_salt;
}

@property (copy, nonatomic, readonly) NSData *salt;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSalt:(id)arg1;
- (id)anonymizeObject:(id)arg1;
- (id)anonymizeString:(id)arg1 withSalt:(id)arg2;
- (id)anonymizeArray:(id)arg1;
- (id)anonymizeDictionary:(id)arg1;

@end
