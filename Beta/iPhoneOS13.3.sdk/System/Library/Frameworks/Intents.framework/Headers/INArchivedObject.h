/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class NSData, NSString;

@interface INArchivedObject : NSObject <Swift>

{
    NSString *_typeName;
    NSData *_messageData;
}

@property (copy, nonatomic, readonly) NSString *typeName;
@property (copy, nonatomic, readonly) NSData *messageData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)initWithTypeName:(id)arg1 messageData:(id)arg2;

@end
