/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

#import <Social/Swift-Protocol.h>

@class NSItemProvider, NSString, NSURL, UIImage;

@interface SLAttachment : NSObject <Swift>

{
    CDUnknownBlockType _previewUpdateObserver;
    CDUnknownBlockType _payloadUpdateObserver;
    NSString *_identifier;
    _Bool _startedPayloadLoad;
    _Bool _needsAnotherPreviewGeneration;
    long long _previewType;
    UIImage *_previewImage;
    long long _type;
    id _payload;
    NSURL *_payloadSourceFileURL;
    NSItemProvider *_itemProvider;
    NSString *_typeIdentifier;
    long long _itemProviderPreviewType;
    long long _downsampleStatus;
}

@property (nonatomic) long long downsampleStatus;
@property (nonatomic) _Bool startedPayloadLoad;
@property (nonatomic) _Bool needsAnotherPreviewGeneration;
@property long long previewType;
@property (retain, nonatomic) UIImage *previewImage;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) long long type;
@property (copy, nonatomic) id payload;
@property (copy, nonatomic) NSURL *payloadSourceFileURL;
@property (retain, nonatomic) NSItemProvider *itemProvider;
@property (copy, nonatomic) NSString *typeIdentifier;
@property (nonatomic, readonly) long long itemProviderPreviewType;

+ (_Bool)supportsSecureCoding;
+ (_Bool)attachmentTypeRepresentsAnImage:(long long)arg1;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_uniqueIdentifier;
- (id)initWithPayload:(id)arg1 type:(long long)arg2 previewImage:(id)arg3;
- (void)setPreviewUpdateObserverWithBlock:(CDUnknownBlockType)arg1;
- (void)setPayloadUpdateObserverWithBlock:(CDUnknownBlockType)arg1;

@end
