/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <Foundation/NSObject.h>

@interface CoreDAVAction : NSObject

{
    int _action;
    id _context;
    id _changeContext;
    _Bool _ignoresGuardianRestrictions;
}

@property (nonatomic, readonly) int action;
@property (nonatomic, readonly) id context;
@property (retain, nonatomic) id changeContext;
@property (nonatomic) _Bool ignoresGuardianRestrictions;

- (id)description;
- (id)initWithAction:(int)arg1 context:(id)arg2;

@end
