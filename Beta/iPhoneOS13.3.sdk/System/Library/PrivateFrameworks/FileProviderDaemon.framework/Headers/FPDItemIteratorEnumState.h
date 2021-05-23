/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <Foundation/NSObject.h>

@class FPItem, NSData;

@protocol FPXPCAutomaticErrorProxy><FPXEnumerator;

__attribute__((visibility("hidden")))
@interface FPDItemIteratorEnumState : NSObject

{
    FPItem *_parentItem;
    id <FPXPCAutomaticErrorProxy><FPXEnumerator> _enumerator;
    NSData *_nextPage;
}

@property (retain, nonatomic) FPItem *parentItem;
@property (retain, nonatomic) id <FPXPCAutomaticErrorProxy><FPXEnumerator> enumerator;
@property (retain, nonatomic) NSData *nextPage;

@end
