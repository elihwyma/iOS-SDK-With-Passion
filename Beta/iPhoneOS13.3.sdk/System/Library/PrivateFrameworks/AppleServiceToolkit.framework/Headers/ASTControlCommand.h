/*
 Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface ASTControlCommand : NSObject

{
    _Bool _forceSequential;
    _Bool _haltOnError;
    NSMutableDictionary *_actionStorage;
}

@property (nonatomic) _Bool forceSequential;
@property (nonatomic) _Bool haltOnError;
@property (retain, nonatomic) NSMutableDictionary *actionStorage;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)reset;
- (id)requestData;
- (void)updateAction:(id)arg1;
- (id)requestWithData:(id)arg1 session:(id)arg2 queue:(id)arg3;
- (void)performActionsWithSession:(id)arg1 queue:(id)arg2;
- (_Bool)allActionsFinished;

@end
