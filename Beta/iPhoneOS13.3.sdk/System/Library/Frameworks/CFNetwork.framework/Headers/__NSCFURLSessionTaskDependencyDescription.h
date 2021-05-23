/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/NSURLSessionTaskDependencyDescription.h>

@class __NSURLSessionTaskDependencyResourceIdentifier;

@interface __NSCFURLSessionTaskDependencyDescription : NSURLSessionTaskDependencyDescription

{
    float _priority;
    _Bool _exclusive;
    __NSURLSessionTaskDependencyResourceIdentifier *_dependent;
    __NSURLSessionTaskDependencyResourceIdentifier *_parent;
}

- (void)dealloc;
- (id)description;
- (id)_parent;
- (float)priority;
- (void)setPriority:(float)arg1;
- (id)_dependent;
- (id)initWithPriority:(float)arg1 exclusive:(_Bool)arg2;
- (id)initWithURLPath:(id)arg1 mimeType:(id)arg2 parentURLPath:(id)arg3 parentMimeType:(id)arg4 priority:(float)arg5 exclusive:(_Bool)arg6;
- (_Bool)exclusive;
- (void)setExclusive:(_Bool)arg1;
- (void)set_dependent:(id)arg1;
- (void)set_parent:(id)arg1;

@end
