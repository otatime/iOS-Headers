//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABContentController.h>

#import "ABMultipleSourceImagePickerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UIModalViewDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UIPopoverControllerDelegate.h"

@class CAKeyframeAnimation, NSArray, NSDictionary, UIImagePickerController, UIPopoverController;

@interface ABImagePickerController : ABContentController <UIModalViewDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIActionSheetDelegate, UIAlertViewDelegate, UIPopoverControllerDelegate, ABMultipleSourceImagePickerDelegate>
{
    BOOL _hasExistingPhoto;
    BOOL _allowsEditingExistingPhoto;
    BOOL _canChoosePhoto;
    BOOL _canChooseFromMultiplePhotos;
    BOOL _confirmingDelete;
    BOOL _applyImageChangesToAllPeople;
    UIImagePickerController *_imagePicker;
    NSArray *_people;
    NSArray *_writablePeople;
    NSDictionary *_animationContextDictionary;
    CAKeyframeAnimation *_bounceAnimation;
    UIPopoverController *_popoverPresenter;
    BOOL _editingImage;
    id <ABPersonImageDataDelegate> _imageDataDelegate;
}

@property(nonatomic) id <ABPersonImageDataDelegate> imageDataDelegate; // @synthesize imageDataDelegate=_imageDataDelegate;
- (void)multipleSourcePickerDidSelectPhotoPicker:(id)arg1;
- (void)multipleSourcePicker:(id)arg1 didSelectPerson:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)deletePhotoNoConfirm;
- (void)delayedPerform:(SEL)arg1 withObject:(id)arg2;
- (void)delayedPerform:(SEL)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingImage:(id)arg2 editingInfo:(id)arg3;
- (id)ab_windowContentViewForView:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)animationDidStopAfterDelay:(id)arg1;
- (id)_createImagePickerForEditingImageData:(id)arg1 shouldSaveFullSize:(BOOL)arg2 cropRect:(struct CGRect)arg3;
- (id)_createImagePicker;
- (void)suspend;
- (void)resume;
- (void)cancelPicker;
- (void)deletePhoto:(BOOL)arg1;
- (void)doEditPhoto;
- (void)editPhoto;
- (void)chooseExisting;
- (void)usePhotoFromPerson:(id)arg1;
- (void)choosePhoto;
- (id)buttonTitlesAndIndicesForPickingPreferredPhoto;
- (void)addButtonForSource:(BOOL)arg1 suffix:(int)arg2 name:(id)arg3 indexInAllPeople:(int)arg4 toArray:(id)arg5;
- (id)_formatStringForSource:(void *)arg1 withSuffix:(BOOL)arg2 useAbbreviatedStrings:(BOOL)arg3;
- (void)takePhoto;
- (void)_tearDownImagePickerController;
- (void)_showActionSheet:(id)arg1 previousOwner:(id)arg2;
- (id)_removePreviousSheet;
- (void)_showImagePickerWithPriorConfirmation:(BOOL)arg1;
- (BOOL)_hasMultipleWritablePeople;
- (id)popoverPresenterForViewController:(id)arg1;
- (void)orderOut:(id)arg1;
- (void)releaseImagePicker;
- (void)reload;
- (void)back:(BOOL)arg1 save:(BOOL)arg2;
- (id)contentView;
- (BOOL)hasMultipleActions;
- (BOOL)canTakePhoto;
- (void)dealloc;
- (id)initWithContentControllerDelegate:(id)arg1 addressBook:(void *)arg2;

@end
