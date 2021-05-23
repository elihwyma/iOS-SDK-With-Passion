/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/WBSParsecSchema.h>

@interface _WBSParsecArraySchema : WBSParsecSchema

{
    WBSParsecSchema *_elementSchema;
}

@property (retain, nonatomic) WBSParsecSchema *elementSchema;

- (id)initWithElementSchema:(id)arg1 associatedError:(id)arg2 isOptional:(_Bool)arg3;
- (_Bool)_validateChild:(id)arg1 ofParent:(id)arg2 withParentAssociatedError:(id)arg3 errorHandler:(CDUnknownBlockType)arg4;

@end
