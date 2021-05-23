/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface SFIncrementingIVGenerator : NSObject

{
    id _incrementingIVGeneratorInternal;
}

@property (copy, nonatomic) NSData *messageID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithMessageID:(id)arg1;
- (id)initWithRandomMessageID;
- (id)generateIVWithLength:(long long)arg1 error:(id *)arg2;

@end
