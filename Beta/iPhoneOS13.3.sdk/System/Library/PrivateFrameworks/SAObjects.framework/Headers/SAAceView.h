/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseAceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@protocol SAAceSerializable;

@interface SAAceView : SABaseAceObject <Swift>

@property (nonatomic) _Bool canBeRefreshed;
@property (nonatomic) _Bool canUseServerTTS;
@property (retain, nonatomic) id <SAAceSerializable> context;
@property (copy, nonatomic) NSNumber *deferredRendering;
@property (copy, nonatomic) NSNumber *listenAfterSpeaking;
@property (copy, nonatomic) NSDictionary *speakableContextInfo;
@property (copy, nonatomic) NSString *speakableText;
@property (copy, nonatomic) NSString *viewId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)aceView;
+ (id)aceViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
