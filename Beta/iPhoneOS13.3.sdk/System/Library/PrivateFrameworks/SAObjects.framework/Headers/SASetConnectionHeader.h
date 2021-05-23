/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, SAConnectionPolicy;

@interface SASetConnectionHeader : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *aceHostHeader;
@property (retain, nonatomic) SAConnectionPolicy *connectionPolicy;
@property (nonatomic) _Bool reconnectNow;

+ (id)setConnectionHeader;
+ (id)setConnectionHeaderWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
