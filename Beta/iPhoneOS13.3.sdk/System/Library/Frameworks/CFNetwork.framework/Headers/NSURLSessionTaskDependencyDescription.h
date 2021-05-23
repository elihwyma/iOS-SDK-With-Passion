/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSString, __NSURLSessionTaskDependencyResourceIdentifier;

@interface NSURLSessionTaskDependencyDescription : NSObject

{
    NSString *_dependentURLPath;
    NSString *_dependentMimeType;
    NSString *_parentURLPath;
    NSString *_parentMimeType;
}

@property (retain, nonatomic) __NSURLSessionTaskDependencyResourceIdentifier *_dependent;
@property (retain, nonatomic) __NSURLSessionTaskDependencyResourceIdentifier *_parent;
@property (nonatomic) float priority;
@property (nonatomic) _Bool exclusive;
@property (readonly) NSString *dependentURLPath;
@property (readonly) NSString *dependentMimeType;
@property (readonly) NSString *parentURLPath;
@property (readonly) NSString *parentMimeType;

+ (id)taskDependencyDescriptionWithURLPath:(id)arg1 parentURLPath:(id)arg2;
+ (id)taskDependencyDescriptionWithURLPath:(id)arg1 parentMimeType:(id)arg2;
+ (id)taskDependencyDescriptionWithMimeType:(id)arg1 parentURLPath:(id)arg2;
+ (id)taskDependencyDescriptionWithMimeType:(id)arg1 parentMimeType:(id)arg2;
+ (id)taskDependencyDescriptionWithParentURLPath:(id)arg1;
+ (id)taskDependencyDescriptionWithParentMimeType:(id)arg1;

@end
