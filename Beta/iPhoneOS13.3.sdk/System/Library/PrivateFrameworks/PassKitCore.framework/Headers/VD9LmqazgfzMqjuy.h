/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSString, ODEF66BPvkL9lz2w;

@interface VD9LmqazgfzMqjuy : NSObject

{
    int _endpointID;
    ODEF66BPvkL9lz2w *_name;
    NSString *_phone;
    NSString *_pPhone;
    NSString *_pEmail;
    NSString *_email;
    NSString *_endpointIdentifier;
    unsigned long long _settingsType;
}

@property (retain, nonatomic) ODEF66BPvkL9lz2w *name;
@property (retain, nonatomic) NSString *phone;
@property (retain, nonatomic) NSString *pPhone;
@property (retain, nonatomic) NSString *pEmail;
@property (retain, nonatomic) NSString *email;
@property (retain, nonatomic) NSString *endpointIdentifier;
@property (nonatomic) int endpointID;
@property (nonatomic) unsigned long long settingsType;

- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)toDictionary;

@end
