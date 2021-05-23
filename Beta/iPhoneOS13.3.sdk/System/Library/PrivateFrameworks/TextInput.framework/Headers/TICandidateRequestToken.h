/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSUUID, TIDocumentState;

@interface TICandidateRequestToken : NSObject

{
    int _shiftState;
    NSUUID *_UUID;
    TIDocumentState *_documentState;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, readonly) TIDocumentState *documentState;
@property (nonatomic, readonly) int shiftState;

+ (_Bool)supportsSecureCoding;
+ (id)tokenForKeyboardState:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isSameRequestAs:(id)arg1;
- (id)initForKeyboardState:(id)arg1;
- (id)shortIdentifier;

@end
