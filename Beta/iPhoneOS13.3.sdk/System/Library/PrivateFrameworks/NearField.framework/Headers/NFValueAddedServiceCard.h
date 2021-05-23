/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface NFValueAddedServiceCard : NSObject

{
    _Bool _userInterventionRequired;
    int _type;
    NSData *_identifier;
    NSData *_token;
    NSData *_data;
}

@property (retain, nonatomic) NSData *identifier;
@property _Bool userInterventionRequired;
@property int type;
@property (retain) NSData *token;
@property (retain) NSData *data;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)asDictionary;

@end
