/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

#import <BackBoardServices/Swift-Protocol.h>

@class BKSHIDEventDeferringEnvironment, BKSHIDEventDeferringToken, BKSHIDEventDisplay, NSString;

@interface BKSHIDEventBaseAttributes : NSObject <Swift>

{
    unsigned short _options;
    int _source;
    BKSHIDEventDeferringEnvironment *_environment;
    BKSHIDEventDisplay *_display;
    BKSHIDEventDeferringToken *_token;
}

@property (retain, nonatomic) BKSHIDEventDeferringEnvironment *environment;
@property (retain, nonatomic) BKSHIDEventDisplay *display;
@property (retain, nonatomic) BKSHIDEventDeferringToken *token;
@property (nonatomic) int source;
@property (nonatomic) unsigned short options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)protobufSchema;
+ (id)baseAttributesFromResolution:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
