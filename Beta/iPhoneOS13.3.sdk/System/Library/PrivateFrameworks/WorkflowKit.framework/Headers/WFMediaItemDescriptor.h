/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/MTLModel.h>

#import <WorkflowKit/Swift-Protocol.h>

@class NSData, NSDictionary, NSNumber, NSString;

@interface WFMediaItemDescriptor : MTLModel <Swift>

{
    NSString *_itemName;
    NSNumber *_persistentIdentifier;
    NSData *_playbackArchiveData;
    NSString *_type;
}

@property (copy, nonatomic, readonly) NSString *itemName;
@property (copy, nonatomic, readonly) NSNumber *persistentIdentifier;
@property (copy, nonatomic, readonly) NSData *playbackArchiveData;
@property (copy, nonatomic, readonly) NSString *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryValue;

+ (_Bool)supportsSecureCoding;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)playbackArchiveDataJSONTransformer;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMediaItemName:(id)arg1 persistentIdentifier:(id)arg2 mediaType:(id)arg3;
- (id)initWithMediaItemName:(id)arg1 playbackArchiveData:(id)arg2;

@end
