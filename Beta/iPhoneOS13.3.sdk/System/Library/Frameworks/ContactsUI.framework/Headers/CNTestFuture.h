/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class NSError;

@protocol NSObject><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface CNTestFuture : NSObject

{
    id <NSObject><NSSecureCoding> _result;
    NSError *_error;
}

@property (nonatomic, readonly) id <NSObject><NSSecureCoding> result;
@property (nonatomic, readonly) NSError *error;

+ (_Bool)supportsSecureCoding;
+ (id)futureWithResult:(id)arg1;
+ (id)futureWithError:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1;
- (id)initWithResult:(id)arg1;

@end
