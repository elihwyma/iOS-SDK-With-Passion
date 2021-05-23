/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class NSString;

@interface MPMediaPredicate : NSObject <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobufferDecodableObject:(id)arg1 library:(id)arg2;
- (id)initWithProtobufferDecodableObject:(id)arg1;
- (id)protobufferEncodableObjectFromLibrary:(id)arg1;
- (id)protobufferEncodableObject;
- (_Bool)evaluateEntity:(id)arg1;

@end
