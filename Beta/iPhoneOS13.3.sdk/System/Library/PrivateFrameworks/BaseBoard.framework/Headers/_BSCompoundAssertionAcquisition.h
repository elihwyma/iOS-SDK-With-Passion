/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class BSCompoundAssertion, NSString;

@interface _BSCompoundAssertionAcquisition : NSObject

{
    struct atomic_flag _invalid;
    BSCompoundAssertion *_assertion;
    NSString *_reason;
    id _context;
}

@property (weak, nonatomic) BSCompoundAssertion *assertion;
@property (copy, nonatomic) NSString *reason;
@property (retain, nonatomic) id context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;

@end
