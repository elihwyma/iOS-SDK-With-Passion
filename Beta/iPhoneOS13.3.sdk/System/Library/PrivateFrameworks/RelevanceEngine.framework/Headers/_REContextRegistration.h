/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSArray, NSUUID, REDuetContextQuery;

@protocol _CDUserContext;

@interface _REContextRegistration : NSObject

{
    _Bool _registered;
    NSArray *_registrations;
    REDuetContextQuery *_query;
    id <_CDUserContext> _context;
    CDUnknownBlockType _callback;
}

@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) REDuetContextQuery *query;
@property (retain, nonatomic) id <_CDUserContext> context;
@property (copy, nonatomic) CDUnknownBlockType callback;

- (void)dealloc;
- (id)initWithQuery:(id)arg1;
- (void)registerWithContext;
- (void)evaluateQuery;
- (void)deregisterWithContext;
- (void)_evaluateQueryWithRegistration:(_Bool)arg1;

@end
