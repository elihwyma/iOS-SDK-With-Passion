/*
 Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface ADIDRecord : NSObject

{
    _Bool _dirty;
    NSString *_ID;
    NSData *_encryptedID;
}

@property (retain, nonatomic) NSData *encryptedID;
@property (retain, nonatomic) NSString *ID;
@property (nonatomic) _Bool dirty;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithID:(id)arg1;

@end
