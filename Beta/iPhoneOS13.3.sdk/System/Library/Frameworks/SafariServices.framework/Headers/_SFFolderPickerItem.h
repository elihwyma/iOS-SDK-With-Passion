/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSString, WebBookmark;

@interface _SFFolderPickerItem : NSObject

{
    WebBookmark *_bookmark;
    unsigned long long _depth;
}

@property (nonatomic, readonly) WebBookmark *bookmark;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) unsigned long long depth;

- (id)_initWithBookmark:(id)arg1 depth:(unsigned long long)arg2;

@end
