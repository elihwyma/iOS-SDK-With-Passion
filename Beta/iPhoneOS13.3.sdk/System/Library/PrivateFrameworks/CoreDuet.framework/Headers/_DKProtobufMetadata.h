/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface _DKProtobufMetadata : NSObject

{
    NSDictionary *_dictionary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *dictionary;

+ (id)fromPBCodable:(id)arg1;
+ (id)createFromData:(id)arg1;

- (id)initWithDictionary:(id)arg1;
- (id)toPBCodable;
- (id)asData;

@end
