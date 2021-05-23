/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSError;

@interface CNFutureResult : NSObject

{
    id _result;
    NSError *_error;
}

@property (retain, nonatomic) id result;
@property (copy, nonatomic) NSError *error;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setResult:(id)arg1 error:(id)arg2;

@end
