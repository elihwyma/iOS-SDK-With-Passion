/*
 Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <Foundation/NSObject.h>

@interface ICNoteSnippetUtilities : NSObject

+ (id)stringByRemovingTitle:(id)arg1 fromString:(id)arg2;
+ (id)snippetForContent:(id)arg1;
+ (id)snippetAndTitleTrimCharacterSet;
+ (struct _NSRange)rangeForTitleInContent:(id)arg1 truncated:(_Bool *)arg2;
+ (id)titleForContent:(id)arg1 truncated:(_Bool *)arg2;

@end
