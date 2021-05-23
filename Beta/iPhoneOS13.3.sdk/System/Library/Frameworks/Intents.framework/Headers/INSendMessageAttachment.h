/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

@class INFile, NSString, NSURL;

@interface INSendMessageAttachment : NSObject

{
    _Bool _currentLocation;
    INFile *_file;
    NSURL *_speechDataURL;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool currentLocation;
@property (copy, nonatomic, readonly) INFile *file;
@property (copy, nonatomic, readonly) NSURL *speechDataURL;

+ (_Bool)supportsSecureCoding;
+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (id)attachmentWithCurrentLocation;
+ (id)attachmentWithFile:(id)arg1;
+ (id)attachmentWithSpeechDataURL:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)_initWithCurrentLocation:(_Bool)arg1 file:(id)arg2 speechDataURL:(id)arg3;
- (_Bool)_intents_enumerateObjectsOfClass:(Class)arg1 withBlock:(CDUnknownBlockType)arg2;

@end
