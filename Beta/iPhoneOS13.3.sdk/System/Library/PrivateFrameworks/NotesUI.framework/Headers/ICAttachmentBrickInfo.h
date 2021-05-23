/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ICAttachmentBrickInfo : NSObject

{
    _Bool _titleLight;
    _Bool _detail1Dark;
    NSString *_titleString;
    NSString *_detail1String;
    NSString *_detail2String;
}

@property (copy, nonatomic) NSString *titleString;
@property (copy, nonatomic) NSString *detail1String;
@property (copy, nonatomic) NSString *detail2String;
@property (nonatomic) _Bool titleLight;
@property (nonatomic) _Bool detail1Dark;

@end
