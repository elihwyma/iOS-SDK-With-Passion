/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SPRemoteInterfaceKeyedArchiverDelegate : NSObject

{
    _Bool _imageIsNamed;
}

@property (nonatomic) _Bool imageIsNamed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)archiver:(id)arg1 didEncodeObject:(id)arg2;
- (id)archiver:(id)arg1 willEncodeObject:(id)arg2;

@end
