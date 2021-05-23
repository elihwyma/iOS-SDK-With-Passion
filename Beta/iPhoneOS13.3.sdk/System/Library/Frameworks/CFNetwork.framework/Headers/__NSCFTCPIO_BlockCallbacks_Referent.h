/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@interface __NSCFTCPIO_BlockCallbacks_Referent : NSObject

{
    struct TCPIO_BlockCallbacks_Listener *_readListener;
    struct TCPIO_BlockCallbacks_Listener *_writeListener;
}

- (id)init;
- (void)dealloc;
- (void)setReadListener:(struct TCPIO_BlockCallbacks_Listener *)arg1;
- (void)setWriteListener:(struct TCPIO_BlockCallbacks_Listener *)arg1;
- (_Bool)withListeners:(CDUnknownBlockType)arg1;

@end
