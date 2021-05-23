/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRTextEditingAttributes.h>

@class NSString;

@interface MRMutableTextEditingAttributes : MRTextEditingAttributes

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *prompt;
@property (nonatomic) struct _MRTextInputTraits inputTraits;

@end
