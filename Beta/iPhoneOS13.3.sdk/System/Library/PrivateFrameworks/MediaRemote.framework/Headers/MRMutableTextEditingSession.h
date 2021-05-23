/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRTextEditingSession.h>

@class MRTextEditingAttributes, NSString;

@interface MRMutableTextEditingSession : MRTextEditingSession

@property (copy, nonatomic) NSString *text;
@property (nonatomic, getter=isEditing) _Bool editing;
@property (retain, nonatomic) MRTextEditingAttributes *attributes;

@end
